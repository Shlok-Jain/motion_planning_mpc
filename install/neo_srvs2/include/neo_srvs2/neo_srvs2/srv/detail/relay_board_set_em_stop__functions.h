// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from neo_srvs2:srv/RelayBoardSetEMStop.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_EM_STOP__FUNCTIONS_H_
#define NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_EM_STOP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "neo_srvs2/msg/rosidl_generator_c__visibility_control.h"

#include "neo_srvs2/srv/detail/relay_board_set_em_stop__struct.h"

/// Initialize srv/RelayBoardSetEMStop message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * neo_srvs2__srv__RelayBoardSetEMStop_Request
 * )) before or use
 * neo_srvs2__srv__RelayBoardSetEMStop_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
bool
neo_srvs2__srv__RelayBoardSetEMStop_Request__init(neo_srvs2__srv__RelayBoardSetEMStop_Request * msg);

/// Finalize srv/RelayBoardSetEMStop message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
void
neo_srvs2__srv__RelayBoardSetEMStop_Request__fini(neo_srvs2__srv__RelayBoardSetEMStop_Request * msg);

/// Create srv/RelayBoardSetEMStop message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * neo_srvs2__srv__RelayBoardSetEMStop_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
neo_srvs2__srv__RelayBoardSetEMStop_Request *
neo_srvs2__srv__RelayBoardSetEMStop_Request__create();

/// Destroy srv/RelayBoardSetEMStop message.
/**
 * It calls
 * neo_srvs2__srv__RelayBoardSetEMStop_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
void
neo_srvs2__srv__RelayBoardSetEMStop_Request__destroy(neo_srvs2__srv__RelayBoardSetEMStop_Request * msg);

/// Check for srv/RelayBoardSetEMStop message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
bool
neo_srvs2__srv__RelayBoardSetEMStop_Request__are_equal(const neo_srvs2__srv__RelayBoardSetEMStop_Request * lhs, const neo_srvs2__srv__RelayBoardSetEMStop_Request * rhs);

/// Copy a srv/RelayBoardSetEMStop message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
bool
neo_srvs2__srv__RelayBoardSetEMStop_Request__copy(
  const neo_srvs2__srv__RelayBoardSetEMStop_Request * input,
  neo_srvs2__srv__RelayBoardSetEMStop_Request * output);

/// Initialize array of srv/RelayBoardSetEMStop messages.
/**
 * It allocates the memory for the number of elements and calls
 * neo_srvs2__srv__RelayBoardSetEMStop_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
bool
neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence__init(neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence * array, size_t size);

/// Finalize array of srv/RelayBoardSetEMStop messages.
/**
 * It calls
 * neo_srvs2__srv__RelayBoardSetEMStop_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
void
neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence__fini(neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence * array);

/// Create array of srv/RelayBoardSetEMStop messages.
/**
 * It allocates the memory for the array and calls
 * neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence *
neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence__create(size_t size);

/// Destroy array of srv/RelayBoardSetEMStop messages.
/**
 * It calls
 * neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
void
neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence__destroy(neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence * array);

/// Check for srv/RelayBoardSetEMStop message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
bool
neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence__are_equal(const neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence * lhs, const neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence * rhs);

/// Copy an array of srv/RelayBoardSetEMStop messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
bool
neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence__copy(
  const neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence * input,
  neo_srvs2__srv__RelayBoardSetEMStop_Request__Sequence * output);

/// Initialize srv/RelayBoardSetEMStop message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * neo_srvs2__srv__RelayBoardSetEMStop_Response
 * )) before or use
 * neo_srvs2__srv__RelayBoardSetEMStop_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
bool
neo_srvs2__srv__RelayBoardSetEMStop_Response__init(neo_srvs2__srv__RelayBoardSetEMStop_Response * msg);

/// Finalize srv/RelayBoardSetEMStop message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
void
neo_srvs2__srv__RelayBoardSetEMStop_Response__fini(neo_srvs2__srv__RelayBoardSetEMStop_Response * msg);

/// Create srv/RelayBoardSetEMStop message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * neo_srvs2__srv__RelayBoardSetEMStop_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
neo_srvs2__srv__RelayBoardSetEMStop_Response *
neo_srvs2__srv__RelayBoardSetEMStop_Response__create();

/// Destroy srv/RelayBoardSetEMStop message.
/**
 * It calls
 * neo_srvs2__srv__RelayBoardSetEMStop_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
void
neo_srvs2__srv__RelayBoardSetEMStop_Response__destroy(neo_srvs2__srv__RelayBoardSetEMStop_Response * msg);

/// Check for srv/RelayBoardSetEMStop message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
bool
neo_srvs2__srv__RelayBoardSetEMStop_Response__are_equal(const neo_srvs2__srv__RelayBoardSetEMStop_Response * lhs, const neo_srvs2__srv__RelayBoardSetEMStop_Response * rhs);

/// Copy a srv/RelayBoardSetEMStop message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
bool
neo_srvs2__srv__RelayBoardSetEMStop_Response__copy(
  const neo_srvs2__srv__RelayBoardSetEMStop_Response * input,
  neo_srvs2__srv__RelayBoardSetEMStop_Response * output);

/// Initialize array of srv/RelayBoardSetEMStop messages.
/**
 * It allocates the memory for the number of elements and calls
 * neo_srvs2__srv__RelayBoardSetEMStop_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
bool
neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence__init(neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence * array, size_t size);

/// Finalize array of srv/RelayBoardSetEMStop messages.
/**
 * It calls
 * neo_srvs2__srv__RelayBoardSetEMStop_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
void
neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence__fini(neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence * array);

/// Create array of srv/RelayBoardSetEMStop messages.
/**
 * It allocates the memory for the array and calls
 * neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence *
neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence__create(size_t size);

/// Destroy array of srv/RelayBoardSetEMStop messages.
/**
 * It calls
 * neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
void
neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence__destroy(neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence * array);

/// Check for srv/RelayBoardSetEMStop message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
bool
neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence__are_equal(const neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence * lhs, const neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence * rhs);

/// Copy an array of srv/RelayBoardSetEMStop messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_srvs2
bool
neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence__copy(
  const neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence * input,
  neo_srvs2__srv__RelayBoardSetEMStop_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_EM_STOP__FUNCTIONS_H_
