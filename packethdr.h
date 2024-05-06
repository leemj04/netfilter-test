#include <netinet/in.h>

typedef struct {
    uint8_t version_and_ihl;
    uint8_t dscp_and_ecn;
    uint16_t total_length;
    uint16_t identification;
    uint16_t flags_and_fragment_offset;
    uint8_t ttl;
    uint8_t protocol;
    uint16_t checksum;
    uint32_t sip_;
    uint32_t dip_;
} IpHdr;

typedef struct {
    uint16_t sport;
	uint16_t dport;
	uint32_t seq;
	uint32_t ack;
	uint8_t offset;
	uint8_t flags;
	uint16_t window;
	uint16_t checksum;
	uint16_t urgent_pointer;
} TcpHdr;