#include "libft.h"

int main(void)
{
	// ft_isalpha
	int a;

	a = '*';

	printf("FT_ISALPHA\n");
	printf("Resultado da função ft_isalpha : %d\n", ft_isalpha(a));
	printf("Resultado da função isalpha : %d\n\n", isalpha(a));

	// ft_isdigit

	a = 'b';

	printf("FT_ISDIGIT\n");
	printf("Resultado da função ft_isdigit : %d\n", ft_isdigit(a));
	printf("Resultado da função isdigit : %d\n\n", isdigit(a));

	// ft_isalnum

	a = '0';

	printf("FT_ISALNUM\n");
	printf("Resultado da função ft_isalnum : %d\n", ft_isalnum(a));
	printf("Resultado da função isalnum : %d\n\n", isalnum(a));

	// ft_isascii

	a = 128;

	printf("FT_ISASCII\n");
	printf("Resultado da função ft_isascii : %d\n", ft_isascii(a));
	printf("Resultado da função isascii : %d\n\n", isascii(a));

	// ft_isprint	

	a = 128;

	printf("FT_ISPRINT\n");
	printf("Resultado da função ft_isprint : %d\n", ft_isprint(a));
	printf("Resultado da função isprint : %d\n\n", ft_isprint(a));

	// ft_strlen	

	const char b[] = "Diego Guedes";

	printf("FT_STRLEN\n");
	printf("Resultado da função ft_strlen : %ld\n", ft_strlen(b));
	printf("Resultado da função strlen : %ld\n\n", strlen(b));

	// ft_memset	

	char c[] = "-10";

	printf("FT_MEMSET\n");
	printf("Resultado da função ft_memset : %s\n", (char*)ft_memset(c, '*', 5));
	printf("Resultado da função memset : %s\n\n", (char*)memset(c, '*', 5));
	
	// ft_bzero
	char d[] = "1";
	char e[] = "asasas";

	printf("FT_BZERO\n");
	printf("Nome 1: %s\n", d);
	ft_bzero(d, 5);
	printf("Resultado da função ft_bzero : %s\n", d);
	printf("Nome 2: %s\n", e);
	bzero(e, 5);
	printf("Resultado da função bzero : %s\n\n", e);


// ft_memcpy	

	char f[5] = "diego";
	char g[5] = "nome";
	char f1[6] = "guedes";
	char g1[6] = "nome";


	printf("FT_MEMCPY\n");
	printf("Nome atual: %s\n", g);
	printf("Resultado da função ft_memcpy : %s\n", (char*)ft_memcpy(g, f, 6));
	printf("Nome atual 2: %s\n", g1);
	printf("Resultado da função memcpy : %s\n\n", (char*)memcpy(g1, f1, 5));

	return (0);
}