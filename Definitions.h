#pragma once

#include <vector>
#include <map>
#include <string>
#include <utility>
#include <chrono>
#include <tuple>
#include <iostream>
#include <thread>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <functional>
#include <iterator>
#include <regex>

#define REFRESH_RATE 60 // std::chrono::milliseconds

typedef std::pair<std::chrono::seconds, std::string> Message;
typedef std::pair<float, float> f_Vec2;
typedef std::pair<int, int> i_Vec2;
typedef std::pair<std::string, std::string> s_Vec2;

typedef std::tuple<float, float, float> f_Vec3;
typedef std::tuple<int, int, int> i_Vec3;
typedef std::tuple<std::string, std::string, std::string> s_Vec3;
