cmake_minimum_required(VERSION 3.8)
project(ros2_base)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# 查找依赖
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# 定义一个函数来简化添加可执行文件的过程
function(add_ros_executable target_name)
  add_executable(${target_name} src/${target_name}.cpp)
  ament_target_dependencies(${target_name} rclcpp std_msgs std_srvs)
  # 安装目标
  install(TARGETS ${target_name}
    DESTINATION lib/${PROJECT_NAME}
  )
endfunction()

# 使用函数添加可执行文件
add_ros_executable(topic_sub)
add_ros_executable(topic_pub)
add_ros_executable(service)
add_ros_executable(client)

install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

ament_package()
