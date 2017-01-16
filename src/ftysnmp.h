/*  =========================================================================
    snmp - basic snmp functions

    Copyright (C) 2014 - 2015 Eaton                                        
                                                                           
    This program is free software; you can redistribute it and/or modify   
    it under the terms of the GNU General Public License as published by   
    the Free Software Foundation; either version 2 of the License, or      
    (at your option) any later version.                                    
                                                                           
    This program is distributed in the hope that it will be useful,        
    but WITHOUT ANY WARRANTY; without even the implied warranty of         
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          
    GNU General Public License for more details.                           
                                                                           
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.            
    =========================================================================
*/

#ifndef FTYSNMP_H_INCLUDED
#define FTYSNMP_H_INCLUDED

#include "fty_metric_snmp_classes.h"

#ifdef __cplusplus
extern "C" {
#endif

//  @interface
// structure for keeping snmp credentials of any version
typedef struct _snmp_credentials_t {
    int version;
    char *community;
} snmp_credentials_t;

//  snmp get function
char *ftysnmp_get (const char* host, const char *oid, const snmp_credentials_t *credentials);

//  snmp getnext function
void ftysnmp_getnext (const char* host, const char *oid, const snmp_credentials_t *credentials, char **resultoid, char **resultvalue);

//  @end

#ifdef __cplusplus
}
#endif

#endif
