find_package(Qt4 REQUIRED)
include(${QT_USE_FILE})
set(moc_headers 
	MainWindow.cpp
	MainWidget.cpp
	)
set(sources gui.cpp
	MainWindow.h
	MainWidget.h
	)
set(headers 
	gui.h 
	${moc_headers}
	)
QT4_WRAP_CPP(mocs ${moc_headers})
add_library(gui SHARED ${headers} 
	${sources}
	${mocs}
	)
target_link_libraries(gui ${QT_LIBRARIES}
	)
target_include_directories(gui PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
