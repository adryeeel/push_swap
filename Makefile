NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

BUILD_DIR = build

# Libft

LIBFT = libft.a
LIBFT_DIR = libft
LIBFT_LINK = -L $(LIBFT_DIR) -l ft

# Main sources

SRCS = push_swap.c
OBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

# Checker functions

CHECKER_SRCS =	ft_check_nan.c \
								ft_check_dups.c	\
								ft_check_sort.c	\
								ft_check_args.c	\
								ft_check_overflow.c	\

CHECKER_DIR = check
CHECKER_OBJS = $(addprefix $(BUILD_DIR)/, $(CHECKER_SRCS:.c=.o))

# Stack handling functions

STACK_SRCS =	ft_stack_pop.c \
							ft_stack_push.c \
							ft_stack_swap.c \
							ft_stack_rotate.c \
							ft_stack_rrotate.c \
							ft_stack_convert.c \

STACK_DIR = stack
STACK_OBJS = $(addprefix $(BUILD_DIR)/, $(STACK_SRCS:.c=.o))

# Sort operation functions

SORT_SRCS =	ft_sa.c \
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

SORT_DIR = sort
SORT_OBJS = $(addprefix $(BUILD_DIR)/, $(SORT_SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS) $(CHECKER_OBJS) $(STACK_OBJS) $(SORT_OBJS) | $(LIBFT_DIR)/$(LIBFT)
	$(CC) $(CFLAGS) $^ $(LIBFT_LINK) -o $(NAME) 

$(BUILD_DIR)/%.o: %.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(CHECKER_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(STACK_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(SORT_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT_DIR)/$(LIBFT):
	make -C $(LIBFT_DIR)

$(BUILD_DIR):
	mkdir -p $@

clean:
	rm -rf $(BUILD_DIR)
	make $@ -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make $@ -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
