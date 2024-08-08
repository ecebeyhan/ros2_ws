#include "rclcpp/rclcpp.hpp"
#include "srvs/srv/get_sensor_status_list.hpp"
#include "srvs/msg/sensor_status.hpp"
#include "srvs/msg/sensor_type.hpp"

#include <memory>
#include <random>

// Use the correct namespace
namespace msg = srvs::msg;

void generateData(const std::shared_ptr<srvs::srv::GetSensorStatusList::Request> request,
          std::shared_ptr<srvs::srv::GetSensorStatusList::Response>      response)
{
    // Random number generators
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<uint32_t> id_dist(1, 1000);
    std::uniform_int_distribution<uint8_t> sensor_type_dist(0, 2); // Assuming 0:undefined, 1:camera, 2:mic
    std::uniform_int_distribution<> bool_dist(0, 1);

    // Example sensor names
    std::vector<std::string> sensor_names = {"Camera1", "Mic1", "Camera2", "Mic2"};

    // Determine how many SensorStatus entries to create
    int num_sensors = 5; // For example, generate data for 5 sensors

    for (int i = 0; i < num_sensors; ++i) {
        srvs::msg::SensorStatus status;

        // Populate SensorStatus fields with random data
        status.sensorid = id_dist(gen);
        status.unitid = id_dist(gen);
        status.sensorname = sensor_names[i % sensor_names.size()];
        status.alive = bool_dist(gen);
        status.recording = bool_dist(gen);
        status.streaming = bool_dist(gen);
        uint8_t sensor_type_value = sensor_type_dist(gen);
        switch(sensor_type_value) {
            case msg::SensorType::UNDEFINED:
                status.sensortype.sensor_type = msg::SensorType::UNDEFINED;
                break;
            case msg::SensorType::CAMERA:
                status.sensortype.sensor_type = msg::SensorType::CAMERA;
                break;
            case msg::SensorType::MIC:
                status.sensortype.sensor_type = msg::SensorType::MIC;
                break;
        }

        // Add the generated status to the response's status_list
        response->status_list.push_back(status);
    }
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("get_sensor_status_server");

  rclcpp::Service<srvs::srv::GetSensorStatusList>::SharedPtr service =
    node->create_service<srvs::srv::GetSensorStatusList>("get_sensor_status", &generateData);

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to generate data.");

  rclcpp::spin(node);
  rclcpp::shutdown();
}