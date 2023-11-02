#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char    *aux_set;
    size_t  size_s1;
    size_t  start;
    size_t  end;
    size_t  length;
    char    *result;
    char    *auxResult;

    size_s1 = ft_strlen(s1);
    if(size_s1 > 0)
    {
        aux_set = (char *)set;
        start = 0;
        while (ft_strchr(aux_set, s1[start]) != NULL)  
            start++;
        end = size_s1;
        while (ft_strchr(aux_set, s1[end - 1]) != NULL && end != 0)  
            end--;
        if (end == 0) {
            return (ft_strdup(""));	   		  	  	  	   	    	     	    	     	      	      	      
        } else { 
            length = end - start; 
            result = malloc(sizeof(char) * (length + 1));
            if (!result) {
                return (NULL);    	     	    	     	      	      	      
            } else { 
                auxResult = result;   
                while(length > 0)
                {
                    *(auxResult++) = s1[start++];
                    length--;
                }
                auxResult[length] = '\0';                 
                return (result);                            
            }                                        
        }                                        
    }                                        
    return (ft_strdup(s1));
}