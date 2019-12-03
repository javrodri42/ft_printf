/*
// Funcion para inicializar la esctructura de flags
*/

void	initialize_flags(t_flags *flags)
{
	flags->precision = 0;
	flags->minus = 0;
	flags->plus = 0;
	flags->hash_key = 0;
	flags->zero = 0;
	flags->space = 0;
	flags->width = 0;
	flags->length_type = 0;
}