#include "rclcpp/rclcpp.hpp"
#include "srvs/srv/get_sensor_status_list.hpp"
#include "srvs/msg/sensor_status.hpp"
#include "srvs/msg/sensor_type.hpp"

#include <memory>
#include <chrono>
#include <cstdlib>

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("get_sensor_status_client");
    rclcpp::Client<srvs::srv::GetSensorStatusList>::SharedPtr client =
        node->create_client<srvs::srv::GetSensorStatusList>("get_sensor_status");

    auto request = std::make_shared<srvs::srv::GetSensorStatusList::Request>();

    // Wait for the service to be available
    while (!client->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
            return 0;
        }
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service not available, waiting again...");
    }

    // Send the request and wait for the response
    auto result = client->async_send_request(request);
    if (rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS) {
        auto response = result.get();

        // Print out the sensor status list details
        for (const auto& status : response->status_list) {
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sensor ID: %u", status.sensorid);
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Unit ID: %u", status.unitid);
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sensor Name: %s", status.sensorname.c_str());
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Alive: %s", status.alive ? "true" : "false");
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Recording: %s", status.recording ? "true" : "false");
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Streaming: %s", status.streaming ? "true" : "false");
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sensor Type: %u", status.sensortype);
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "--------------------------------");
        }
    } else {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service get_sensor_status");
    }

    rclcpp::shutdown();
    return 0;
}
