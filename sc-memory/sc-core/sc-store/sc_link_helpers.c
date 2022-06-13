/*
 * This source file is part of an OSTIS project. For the latest info, see http://ostis.net
 * Distributed under the MIT License
 * (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
 */

#include "sc_link_helpers.h"
#include "sc_element.h"

#include <glib.h>
#ifdef SC_ROCKSDB_FS_STORAGE
#  include <memory.h>

#  define SC_DEFAULT_CHECKSUM G_CHECKSUM_SHA256

sc_bool sc_link_calculate_checksum(const sc_char * sc_string, sc_uint32 size, sc_check_sum ** check_sum)
{
  *check_sum = g_new0(sc_check_sum, 1);
  (*check_sum)->len = (sc_uint8)g_checksum_type_get_length(SC_DEFAULT_CHECKSUM);

  const gchar * result = g_compute_checksum_for_string(SC_DEFAULT_CHECKSUM, sc_string, size);
  memcpy((*check_sum)->data, result, (*check_sum)->len);

  return SC_TRUE;
}
#endif
