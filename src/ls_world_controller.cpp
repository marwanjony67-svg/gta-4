#include "ls_world_controller.h"
#include <godot_cpp/classes/input_event_key.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
using namespace godot;

void LSWorldController::_bind_methods() {
    ClassDB::bind_method(D_METHOD("get_current_district"), &LSWorldController::get_current_district);
    ClassDB::bind_method(D_METHOD("get_faction_summary"), &LSWorldController::get_faction_summary);
    ClassDB::bind_method(D_METHOD("cycle_district"), &LSWorldController::cycle_district);
}
void LSWorldController::_ready() {
    UtilityFunctions::print("LS Gang World C++ extension loaded. F2 cycles districts.");
}
void LSWorldController::_unhandled_key_input(const Ref<InputEvent> &event) {
    Ref<InputEventKey> key = event;
    if (key.is_valid() && key->is_pressed() && !key->is_echo() && key->get_keycode() == Key::KEY_F2)
        cycle_district();
}
String LSWorldController::get_current_district() const {
    static const char *districts[] = {"Ganton", "Idlewood", "Willowfield", "Jefferson", "East Los Santos"};
    return String(districts[district_index]);
}
String LSWorldController::get_faction_summary() const {
    return "Grove Street Families | Ballas | Los Santos Vagos";
}
void LSWorldController::cycle_district() {
    district_index = (district_index + 1) % 5;
    UtilityFunctions::print("District: ", get_current_district());
}
