/*
 * This source file is part of an OSTIS project. For the latest info, see http://ostis.net
 * Distributed under the MIT License
 * (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
 */

#ifndef _sc_keynodes_h_
#define _sc_keynodes_h_

#include "sc-store/sc_types.h"

extern sc_addr concept_authentication_request_user_addr;
extern sc_addr concept_authenticated_user_addr;
extern sc_addr nrel_user_action_class_addr;
extern sc_addr action_read_from_sc_memory_addr;
extern sc_addr action_generate_in_sc_memory_addr;
extern sc_addr action_erase_in_sc_memory_addr;
extern sc_addr action_read_access_levels_from_sc_memory_addr;
extern sc_addr action_generate_access_levels_in_sc_memory_addr;
extern sc_addr action_erase_access_levels_from_sc_memory_addr;

sc_result sc_keynodes_initialize(sc_memory_context * ctx, sc_addr init_memory_generated_structure);

#endif
