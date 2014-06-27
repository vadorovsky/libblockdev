#include <glib.h>

/**
 * bd_dm_create_linear:
 * @map_name: name of the map
 * @device: device to create map for
 * @length: length of the mapping in sectors
 * @uuid: (allow-none): UUID for the new dev mapper device or %NULL if not specified
 * @error_message: (out): variable to store error message to (if any)
 *
 * Returns: whether the new linear mapping @map_name was successfully created
 * for the @device or not
 */
gboolean bd_dm_create_linear (gchar *map_name, gchar *device, guint64 length, gchar *uuid, gchar **error_message);

/**
 * bd_dm_remove:
 * @map_name: name of the map to remove
 * @error_message: (out): variable to store error message to (if any)
 *
 * Returns: whether the @map_name map was successfully removed or not
 */
gboolean bd_dm_remove (gchar *map_name, gchar **error_message);

/**
 * bd_dm_name_from_dm_node:
 * @dm_node: name of the DM node (e.g. "dm-0")
 * @error_message: (out): variable to store error message to (if any)
 *
 * Returns: map name of the map providing the @dm_node device or %NULL
 * (@error_message contains the error in such cases)
 */
gchar* bd_dm_name_from_dm_node (gchar *dm_node, gchar **error_message);

/**
 * bd_dm_node_from_name:
 * @map_name: name of the queried DM map
 * @error_message: (out): variable to store error message to (if any)
 *
 * Returns: DM node name for the @map_name map or %NULL (@error_message contains
 * the error in such cases)
 */
gchar* bd_dm_node_from_name (gchar *map_name, gchar **error_message);
