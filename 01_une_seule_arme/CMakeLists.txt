add_executable(01_une_seule_arme
        main.cc
        src/weapon.cc
        include/firearm.cpp
        include/firearm.h
        SemiAutomatic.cpp
        SemiAutomatic.h)
target_include_directories(01_une_seule_arme PRIVATE include)
