#include "register_types.h"

#include <gdextension_interface.h>

#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/core/memory.hpp>
#include <godot_cpp/godot.hpp>

#include "features/mm_bone_data_feature.h"
#include "features/mm_facing_feature.h"
#include "features/mm_feature.h"
#include "features/mm_root_velocity_feature.h"
#include "features/mm_trajectory_feature.h"

#include "mm_animation_library.h"
#include "mm_animation_player.h"
#include "mm_controller.h"
#include "mm_trajectory_point.h"
#include "motion_matcher.h"

using namespace godot;

void initialize_example_module(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }

    ClassDB::register_abstract_class<MMFeature>();
    ClassDB::register_class<MMTrajectoryFeature>();
    ClassDB::register_class<MMRootVelocityFeature>();
    ClassDB::register_class<MMFacingFeature>();
    ClassDB::register_class<MMBoneDataFeature>();

    ClassDB::register_class<MMAnimationLibrary>();
    ClassDB::register_class<MMAnimationPlayer>();
    ClassDB::register_class<MMController>();
    ClassDB::register_class<MotionMatcher>();
}

void uninitialize_example_module(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }
}

extern "C" {
// Initialization.
GDExtensionBool GDE_EXPORT example_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address, const GDExtensionClassLibraryPtr p_library, GDExtensionInitialization* r_initialization) {
    godot::GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library, r_initialization);

    init_obj.register_initializer(initialize_example_module);
    init_obj.register_terminator(uninitialize_example_module);
    init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);

    return init_obj.init();
}
}