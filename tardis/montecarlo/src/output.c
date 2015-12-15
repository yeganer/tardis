#include <inttypes.h>

typedef struct StorageData {
  double *output_nus;
  double *output_energies;
  double *chi_bf_tmp_partial; //read + write
  double *js; //write, add
  double *nubars; //write, add
  double *line_lists_j_blues; //write, add
  int64_t virt_array_size;
  int64_t virt_packet_count;
  double *virt_packet_nus;
  double *virt_packet_energies;
  double *virt_packet_last_interaction_in_nu;
  double *virt_packet_last_interaction_type;
  double *virt_packet_last_line_interaction_in_id;
  double *virt_packet_last_line_interaction_out_id;
  double *spectrum_virt_nu; // write, add
  double *last_interaction_type;
  double *last_interaction_in_nu;
  double *last_line_interaction_in_id;
  double *last_line_interaction_shell_id;
  double *last_line_interaction_out_id;
} output_data_t;
