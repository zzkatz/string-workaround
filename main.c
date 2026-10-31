#include "./netmesh.c"
#include <stdint.h>
#include <stdio.h>

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

NetworkMesh mesh(String user_name, String cluster_name, i32 device_count,
                 bool mesh_status) {
  return (NetworkMesh){.mesh_user = user_name,
                       .mesh_cluster_name = cluster_name,
                       .device_count = device_count,
                       .mesh_status = false};
}

int main(void) {
  NetworkMesh game_mesh =
      mesh(new_str("kian"), new_str("sonic_game_cluster - 1"), 5, true);

  printf("\nmesh clustername %s ", game_mesh.mesh_cluster_name);
  printf("\nmesh  user %s ", game_mesh.mesh_user);
  printf("\nmesh  status %s ", game_mesh.mesh_status ? "true" : "false");
  printf("\nmesh device count %d ", game_mesh.device_count);
  return 0;
}
