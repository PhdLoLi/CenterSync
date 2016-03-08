/**
 * cclient.hpp 
 * Author: Lijing Wang
 * Date: 3/7/2016
 * Usage: Header of CentralSync Client 
 */
#pragma once

#include "internal_types.hpp"
namespace csync {

class CClient {
 public:
  CClient();
  ~CClient();
  void commit(std::string&);

 private: 
  void go_online();
  void go_offline();
  void listen();

};
}
