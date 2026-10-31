
#include "./string.c"
#include "./types.c"
typedef struct {
  String mesh_user;
  String mesh_cluster_name;
  i32 device_count;
  bool mesh_status;
}

NetworkMesh;
