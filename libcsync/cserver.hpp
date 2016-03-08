/**
 * cserver.hpp 
 * Author: Lijing Wang
 * Date: 3/7/2016
 * Usage: Header of CentralSync Server 
 */

#pragma once

#include "internal_types.hpp"

namespace csync { 
class CServer {
 public:
  CServer();
  ~CServer();

 private: 
  void send_new();
  void listen();

};
}
