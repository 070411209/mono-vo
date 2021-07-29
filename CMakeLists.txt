cmake_minimum_required(VERSION 2.8)
project( mono-vo )
find_package( OpenCV 3.0 REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS} )

file(GLOB viso
    "src/*.h"
    "src/*.cpp"
)

file(GLOB vmap
    "src/mux.cpp"
)

file(GLOB cont
    "src/temp.cpp"
)


file(GLOB vmap
    "src/temp.cpp"
)

add_executable( vo ${vmap} )
target_link_libraries( vo ${OpenCV_LIBS} )


add_executable( contest ${cont} )
target_link_libraries( contest ${OpenCV_LIBS} )
