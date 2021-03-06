/*------------------------------------------------------------------------
  Junction: Concurrent data structures in C++
  Copyright (c) 2016 Jeff Preshing

  Distributed under the Simplified BSD License.
  Original location: https://github.com/preshing/junction

  This software is distributed WITHOUT ANY WARRANTY; without even the
  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the LICENSE file for more information.
------------------------------------------------------------------------*/

#include <junction/ConcurrentMap_Grampa.h>

namespace junction {
    
TURF_TRACE_DEFINE_BEGIN(ConcurrentMap_Grampa, 27) // autogenerated by TidySource.py
TURF_TRACE_DEFINE("[locateTable] flattree lookup redirected")
TURF_TRACE_DEFINE("[createInitialTable] race to create initial table")
TURF_TRACE_DEFINE("[publishTableMigration] called")
TURF_TRACE_DEFINE("[publishTableMigration] replacing single root with single root")
TURF_TRACE_DEFINE("[publishTableMigration] replacing flattree with single root")
TURF_TRACE_DEFINE("[publishTableMigration] replacing single root with flattree")
TURF_TRACE_DEFINE("[publishTableMigration] publishing subtree to existing flattree")
TURF_TRACE_DEFINE("[publishTableMigration] existing flattree too small")
TURF_TRACE_DEFINE("[publishTableMigration] redirected")
TURF_TRACE_DEFINE("[publishTableMigration] recovering from partial publish")
TURF_TRACE_DEFINE("[Mutator] find constructor called")
TURF_TRACE_DEFINE("[Mutator] find was redirected")
TURF_TRACE_DEFINE("[Mutator] insert constructor called")
TURF_TRACE_DEFINE("[Mutator] insert was redirected")
TURF_TRACE_DEFINE("[Mutator::exchangeValue] called")
TURF_TRACE_DEFINE("[Mutator::exchangeValue] exchanged Value")
TURF_TRACE_DEFINE("[Mutator::exchangeValue] detected race to write value")
TURF_TRACE_DEFINE("[Mutator::exchangeValue] racing write inserted new value")
TURF_TRACE_DEFINE("[Mutator::exchangeValue] was redirected")
TURF_TRACE_DEFINE("[Mutator::exchangeValue] was re-redirected")
TURF_TRACE_DEFINE("[Mutator::exchangeValue] overflow after redirect")
TURF_TRACE_DEFINE("[Mutator::eraseValue] called")
TURF_TRACE_DEFINE("[Mutator::eraseValue] detected race to write value")
TURF_TRACE_DEFINE("[Mutator::eraseValue] was redirected")
TURF_TRACE_DEFINE("[Mutator::eraseValue] was re-redirected")
TURF_TRACE_DEFINE("[get] called")
TURF_TRACE_DEFINE("[get] was redirected")
TURF_TRACE_DEFINE_END(ConcurrentMap_Grampa, 27)

} // namespace junction
