#pragma once
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/variant/string.hpp>

namespace godot {
class LSWorldController : public Node3D {
    GDCLASS(LSWorldController, Node3D)
    int district_index = 0;
protected:
    static void _bind_methods();
public:
    void _ready() override;
    void _unhandled_key_input(const Ref<InputEvent> &event) override;
    String get_current_district() const;
    String get_faction_summary() const;
    void cycle_district();
};
}
