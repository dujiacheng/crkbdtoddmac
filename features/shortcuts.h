#pragma once

#include QMK_KEYBOARD_H
#include "../definitions/keycodes.h"
#include "../definitions/process_record.h"
#include "os_toggle.h"
 

process_record_result_t process_shortcuts(uint16_t keycode, keyrecord_t *record);