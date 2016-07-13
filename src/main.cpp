#define BOOST_DISABLE_ASSERTS

#include "config.h"
#define BOOST_TEST_MODULE "C++ test module for OpenFPM_data project"
#include <boost/test/included/unit_test.hpp>
#include <boost/fusion/include/mpl.hpp>

#include <iostream>
#include <typeinfo>

// Include tests

#include "Packer_Unpacker/Packer_unit_tests.hpp"
//#include "Packer_Unpacker/Packer_nested_tests.hpp"
#include "util/copy_compare/meta_cc_unit_tests.hpp"
#include "util/variadic_to_vmpl_unit_test.hpp"
#include "Space/Shape/Point_unit_test.hpp"
#include "timer_util_test.hpp"
#include "Grid/grid_key_dx_expression_unit_tests.hpp"
#include "Point_test_unit_tests.hpp"
#include "util/util_test.hpp"
#include "Space/SpaceBox_unit_tests.hpp"
#include "Space/Shape/Box_unit_tests.hpp"
#include "NN/CellList/CellList_test.hpp"
#include "Vector/vector_unit_tests.hpp"
#include "Space/Shape/HyperCube_unit_test.hpp"
#include "Graph/graph_unit_tests.hpp"
#include "Grid/grid_unit_tests.hpp"
#include "Grid/grid_sm_unit_tests.hpp"
#include "util/mathutil_unit_test.hpp"
#include "NN/CellList/CellDecomposer_unit_tests.hpp"
#include "NN/CellList/CellListIterator_test.hpp"
#ifdef PERFORMANCE_TEST
#include "performance.hpp"
#endif
#include "unit_test_init_cleanup.hpp"
