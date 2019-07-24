#include "pch.h"
#include "Config.h"
#include <string>
#include <map>

std::map<std::string, const Config*> cfgMap;

void InitConfig() {
  for (auto& cfg : cfgs) {
    cfgMap[cfg.ver] = &cfg;
  }
}


bool GetConfig(const std::string&& ver, const Config*& cfg) {
  if (cfgMap.find(ver) != cfgMap.end()) {
    cfg = cfgMap[ver];
    return true;
  }
  return false;
}