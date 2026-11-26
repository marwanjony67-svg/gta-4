#include "register_types.h"
#include "ls_world_controller.h"
#include <godot_cpp/godot.hpp>
using namespace godot;

void initialize_ls_gang_world(ModuleInitializationLevel p_level) {
    if (p_level == MODULE_INITIALIZATION_LEVEL_SCENE)
        ClassDB::register_class<LSWorldController>();
}
void uninitialize_ls_gang_world(ModuleInitializationLevel p_level) { (void)p_level; }

extern "C" {
GDExtensionBool GDE_EXPORT ls_gang_world_library_init(
    GDExtensionInterfaceGetProcAddress p_get_proc_address,
    GDExtensionClassLibraryPtr p_library,
    GDExtensionInitialization *r_initialization) {
    GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library, r_initialization);
    init_obj.register_initializer(initialize_ls_gang_world);
    init_obj.register_terminator(uninitialize_ls_gang_world);
    init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);
    return init_obj.init();
}
}
