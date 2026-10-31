#include "./netmesh.c"
#include <stddef.h>
#include <stdint.h>
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
NetworkMesh mesh(String user_name, String cluster_name, i32 device_count,
                 bool mesh_status) {
  return (NetworkMesh){.mesh_user = user_name,
                       .mesh_cluster_name = cluster_name,
                       .device_count = device_count,
                       .mesh_status = mesh_status};
}
int main(void) {
  i32 max_meshesh = 100;
  NetworkMesh meshes[max_meshesh];
  for (i32 i = 0; i < max_meshesh; ++i) {
    NetworkMesh game_mesh =
        (NetworkMesh)mesh(new_str("kian"), new_str("sonic_game_cluster-1"),
                          i + max_meshesh, true);
    meshes[i] = game_mesh;
  }
  i32 input = 0;
  printf("Enter the mesh which you need ?");
  if (!scanf("%d", &input)) {
    printf("\nError while taking input");
    return -1;
  }
  if (input >= max_meshesh || input < 0) {
    printf("\nError index value invalid");
    return -1;
  }
  NetworkMesh *mesh_ptr = &meshes[input];
  printf("\n %s has %d devices", mesh_ptr->mesh_cluster_name.s,
         mesh_ptr->device_count);
  return 0;
}
