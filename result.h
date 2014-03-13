/**
 * All new code in this distribution is Copyright 2005 by North Carolina
 * State University. All rights reserved. Redistribution and use in
 * source and binary forms are permitted provided that this entire
 * copyright notice is duplicated in all such copies, and that any
 * documentation, announcements, and other materials related to such
 * distribution and use acknowledge that the software was developed at
 * North Carolina State University, Raleigh, NC. No charge may be made
 * for copies, derivations, or distributions of this material without the
 * express written consent of the copyright holder. Neither the name of
 * the University nor the name of the author may be used to endorse or
 * promote products derived from this material without specific prior
 * written permission.
 *
 * IN NO EVENT SHALL THE NORTH CAROLINA STATE UNIVERSITY BE LIABLE TO ANY
 * PARTY FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
 * DAMAGES ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION,
 * EVEN IF THE NORTH CAROLINA STATE UNIVERSITY HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE. THE SOFTWARE PROVIDED HEREUNDER IS ON AN
 * "AS IS" BASIS, AND THE NORTH CAROLINA STATE UNIVERSITY HAS NO
 * OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR
 * MODIFICATIONS. "
 *
 */

/**
 * result.h
 *
 * Author: An Liu
 * Date: 05/06/2007
 */

struct public_key_msg
{
  uint8_t len;  //key length
  uint8_t x[24];
  uint8_t y[24];
  uint8_t id;
} __attribute__ ((packed));
typedef struct public_key_msg public_key_msg;

struct private_key_msg
{
  uint8_t len;  //key length
  uint8_t d[24];
  uint8_t id;
} __attribute__ ((packed));
typedef struct private_key_msg private_key_msg;

struct time_msg
{
  uint32_t t;
  uint8_t type;
  uint8_t pass;
  uint8_t id;
} __attribute__ ((packed));
typedef struct time_msg time_msg;

struct packet_msg
{
  uint8_t c_len;  //length of content
  uint8_t content[52];
  uint8_t r_len;  //length of r(s)
  uint8_t r[24];
  uint8_t s[24];
} __attribute__ ((packed));
typedef struct packet_msg packet_msg;

struct ecdh_key_msg
{
  uint8_t len;
  uint8_t k[24];
  uint8_t id;
} __attribute__ ((packed));
typedef struct ecdh_key_msg ecdh_key_msg;

struct uint8_msg
{
  uint8_t len;
  uint8_t content[101];
} __attribute__ ((packed));
typedef struct uint8_msg uint8_msg;

enum {
  AM_PUBLIC_KEY_MSG = 11,
  AM_PRIVATE_KEY_MSG = 12,
  AM_TIME_MSG = 13,
  AM_PACKET_MSG = 14,
  AM_ECDH_KEY_MSG = 15,
  AM_UINT8_MSG = 16
};
