NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

BUILD_DIR = build

# Libft

LIBFT = libft.a
LIBFT_DIR = libs
LIBFT_LINK = -L $(LIBFT_DIR) -l ft

# Main sources

PS_SRCS = push_swap.c \

PS_DIR = push_swap
PS_OBJS = $(addprefix $(BUILD_DIR)/, $(PS_SRCS:.c=.o))

# Action functions

ACTS_SRCS =	ft_sa.c \
						ft_sb.c \
						ft_ss.c \
						ft_pa.c \
						ft_pb.c \
						ft_ra.c \
						ft_rb.c \
						ft_rr.c \
						ft_rra.c \
						ft_rrb.c \
						ft_rrr.c \

ACTS_DIR = $(PS_DIR)/acts
ACTS_OBJS = $(addprefix $(BUILD_DIR)/, $(ACTS_SRCS:.c=.o))

# Args functions

ARGS_SRCS =	ft_args_push.c \
						ft_args_merge.c \
						ft_args_check.c	\
						ft_args_process.c \

ARGS_DIR =  $(PS_DIR)/args
ARGS_OBJS = $(addprefix $(BUILD_DIR)/, $(ARGS_SRCS:.c=.o))

# Args check functions

A_CHECK_SRCS =	ft_check_nan.c \
								ft_check_dups.c	\
								ft_check_sort.c	\
								ft_check_quote.c	\
								ft_check_overflow.c	\

A_CHECK_DIR = $(ARGS_DIR)/check
A_CHECK_OBJS = $(addprefix $(BUILD_DIR)/, $(A_CHECK_SRCS:.c=.o))

# Stack handling functions

STACK_SRCS =	ft_stack_pop.c \
							ft_stack_min.c \
							ft_stack_max.c \
							ft_stack_push.c \
							ft_stack_init.c \
							ft_stack_swap.c \
							ft_stack_sort.c \
							ft_stack_print.c \
							ft_stack_rotate.c \
							ft_stack_create.c \
							ft_stack_destroy.c \
							ft_stack_process.c \
							ft_stack_rrotate.c \
							ft_stack_convert.c \

STACK_DIR = $(PS_DIR)/stack
STACK_OBJS = $(addprefix $(BUILD_DIR)/, $(STACK_SRCS:.c=.o))

# Solve functions

SOLVE_SRCS =	ft_solve_sa.c \
							ft_solve_sb.c \
							ft_solve_three.c \

SOLVE_DIR = $(PS_DIR)/solve
SOLVE_OBJS = $(addprefix $(BUILD_DIR)/, $(SOLVE_SRCS:.c=.o))

# Calc functions

S_CALC_SRCS =	ft_calc_ra_rb.c \
							ft_calc_ra_rrb.c \
							ft_calc_rra_rb.c \
							ft_calc_rra_rrb.c \
							ft_calc_total_ops.c \

S_CALC_DIR = $(SOLVE_DIR)/calc
S_CALC_OBJS = $(addprefix $(BUILD_DIR)/, $(S_CALC_SRCS:.c=.o))

# Stack check functions

S_CHECK_SRCS =	ft_check_sa.c \
								ft_check_sb.c \

S_CHECK_DIR = $(SOLVE_DIR)/check
S_CHECK_OBJS = $(addprefix $(BUILD_DIR)/, $(S_CHECK_SRCS:.c=.o))

# Exec functions

S_EXEC_SRCS =	ft_exec_ra_rb.c \
							ft_exec_ra_rrb.c \
							ft_exec_rra_rb.c \
							ft_exec_rra_rrb.c \
							ft_sort_exec_sa.c \
							ft_sort_exec_sb.c \

S_EXEC_DIR = $(SOLVE_DIR)/exec
S_EXEC_OBJS = $(addprefix $(BUILD_DIR)/, $(S_EXEC_SRCS:.c=.o))

# Find functions

S_FIND_SRCS =	ft_find_least_sa.c \
							ft_find_least_sb.c \
							ft_find_place_sa.c \
							ft_find_place_sb.c \

S_FIND_DIR = $(SOLVE_DIR)/find
S_FIND_OBJS = $(addprefix $(BUILD_DIR)/, $(S_FIND_SRCS:.c=.o))

# Checker program

CHECKER = checker

CHECKER_SRCS =	checker.c \
								ft_checker_process.c \

CHECKER_DIR = checker
CHECKER_OBJS = $(addprefix $(BUILD_DIR)/, $(CHECKER_SRCS:.c=.o))

# Acts handling functions for checker

C_ACTS_SRCS =	ft_acts_read.c \
							ft_acts_push.c \
							ft_acts_type.c \
							ft_acts_exec.c \
							ft_acts_check.c \
							ft_acts_readl.c \

C_ACTS_DIR = $(CHECKER_DIR)/acts
C_ACTS_OBJS = $(addprefix $(BUILD_DIR)/, $(C_ACTS_SRCS:.c=.o))

# Acts validation functions for checker

C_CHECK_SRCS =	ft_check_push.c \
								ft_check_swap.c \
								ft_check_rotate.c \
								ft_check_rrotate.c \

C_CHECK_DIR = $(CHECKER_DIR)/check
C_CHECK_OBJS = $(addprefix $(BUILD_DIR)/, $(C_CHECK_SRCS:.c=.o))

# Acts type functions for checker

C_TYPE_SRCS =	ft_type_push.c \
							ft_type_swap.c \
							ft_type_rotate.c \
							ft_type_rrotate.c \

C_TYPE_DIR = $(CHECKER_DIR)/type
C_TYPE_OBJS = $(addprefix $(BUILD_DIR)/, $(C_TYPE_SRCS:.c=.o))

C_EXEC_SRCS =	ft_exec_push.c \
							ft_exec_swap.c \
							ft_exec_rotate.c \
							ft_exec_rrotate.c \

C_EXEC_DIR = $(CHECKER_DIR)/exec
C_EXEC_OBJS = $(addprefix $(BUILD_DIR)/, $(C_EXEC_SRCS:.c=.o))

all: $(NAME)

bonus: $(CHECKER)

$(NAME): $(PS_OBJS) $(ACTS_OBJS) $(STACK_OBJS) $(SOLVE_OBJS) $(S_CALC_OBJS) $(S_CHECK_OBJS) $(S_EXEC_OBJS) $(S_FIND_OBJS) $(ARGS_OBJS) $(A_CHECK_OBJS) $(LIBFT_DIR)/$(LIBFT)
	@$(CC) $(CFLAGS) $^ $(LIBFT_LINK) -o $(PS_DIR)/$@

$(CHECKER): $(CHECKER_OBJS) $(ARGS_OBJS) $(ACTS_OBJS) $(STACK_OBJS) $(SOLVE_OBJS) $(S_CHECK_OBJS) $(S_EXEC_OBJS) $(S_FIND_OBJS) $(S_CALC_OBJS) $(A_CHECK_OBJS) $(C_ACTS_OBJS) $(C_CHECK_OBJS) $(C_TYPE_OBJS) $(C_EXEC_OBJS) $(LIBFT_DIR)/$(LIBFT)
	@$(CC) $(CFLAGS) $^ -o $(CHECKER_DIR)/$@

$(BUILD_DIR)/%.o: $(PS_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(ACTS_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(STACK_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(SOLVE_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(S_CALC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(S_CHECK_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(S_EXEC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(S_FIND_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(ARGS_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(A_CHECK_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(CHECKER_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(C_ACTS_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(C_CHECK_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(C_TYPE_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(C_EXEC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT_DIR)/$(LIBFT):
	@echo -n "Building libs... "
	@$(MAKE) -C $(LIBFT_DIR) > /dev/null 2>&1
	@echo "Done."

$(BUILD_DIR):
	mkdir -p $@

clean:
	rm -rf $(BUILD_DIR)
	@$(MAKE) $@ -C $(LIBFT_DIR) > /dev/null 2>&1

fclean: clean
	rm -f $(PS_DIR)/$(NAME)
	rm -f $(CHECKER_DIR)/$(CHECKER)
	@$(MAKE) $@ -C $(LIBFT_DIR) > /dev/null 2>&1

re: fclean all

.PHONY: all clean fclean re
