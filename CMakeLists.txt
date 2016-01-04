cmake_minimum_required(VERSION 3.3)
project("libft" C)

add_compile_options(-Wall -Wextra -Werror)

add_library(ft
  ft_mem.c ft_mem2.c
  ft_str.c ft_str2.c ft_str3.c ft_str4.c ft_str5.c ft_str6.c ft_strsplit.c
  ft_chr.c ft_chr2.c
  ft_io.c ft_io2.c
  ft_num.c ft_itoa.c ft_atoi.c)
target_include_directories(ft PUBLIC includes)
target_compile_definitions(ft PUBLIC $<$<CONFIG:Debug>:DEBUG>)
