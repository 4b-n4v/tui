#pragma once
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
/* FUNCTION
 * get_monitor_path:
 * Get monitors.conf configuration
 * file path in $HOME/.config/hypr.conf
 *
 */
std::string get_monitor_path();

/* FUNCTION
 * Extend:
 * Change second monitor to vertical
 * and set refresh rate to maximum
 *
 */
void vertical(std::string &mp);
/* FUNCTION
 * Extend144:
 * Change second monitor
 * and set refresh rate to maximum
 *
 */
void extend144(std::string &mp);

/* FUNCTION
 * ExtendTV:
 * Change second monitor
 * limit refresh rate to 70
 *
 */

void extend_tv(std::string &mp);
