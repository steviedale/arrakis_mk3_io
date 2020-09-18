# F75111 I/O Controller


<!-- TABLE OF CONTENTS -->
## Table of Contents
* [About](#about)
  * [Supported Devices](#supported-devices)
* [Getting Started](#getting-started)
  * [Prerequisites](#prerequisites)
  * [Docker Setup](#docker-setup)
  * [Installation](#installation)
* [Usage](#usage)
* [License](#license)
* [Contact](#contact)



<!-- ABOUT THE PROJECT -->
## About the F75111 I/O Controller 
This project provides an interface to control the F75111 GPIO pins. 

This project has three packages:
* `f75111_io_controller` 
  - this package contains a library with a class that initializes the connection to the GPIO pins and offers a function, `setPin`, which sets a given pin to on or off. 
* `f75111_io_controller_ros`
  - this package contains a ROS2 node that advertises a service for turning GPIO pins on and off.
* `f75111_io_controller_msgs`
  - this package contains a definition for the ROS2 service message, SetPin.srv, used by the `f75111_io_controller_ros` package. 

### Supported Devices:
- Intel ICH4
- Intel 945 ICH7
- Intel 510&525 ICH8
- Intel 275 ICH10
- Intel NM10
- Intel QM67
- Intel QM77
- Intel HM65
- Intel HM76
- Intel Bay Trail-I SoC
- Intel Apollo Lake SoC
- Intel Sky Lake SoC
- Intel Sky Lake-U SoC
- VIA VT8237
- VIA CX700M
- VIA VX900

<!-- GETTING STARTED -->
## Getting Started

### Prerequisites
None.

### Docker Setup
Add the `--cap-add=SYS_RAWIO` flag to the `docker run` command to give the container access to the I/O ports.

### Installation
1. Clone the repo
```
git clone https://github.com/your_username_/Project-Name.git
```


<!-- USAGE EXAMPLES -->
## Usage

### Library Usage
### ROS Usage


<!-- LICENSE -->
## License
Distributed under the Apache 2.0 License.


<!-- CONTACT -->
## Contact
Stevie Dale - steven.dale@swri.org

Project Link: [https://github.com/your_username/repo_name](https://github.com/your_username/repo_name)