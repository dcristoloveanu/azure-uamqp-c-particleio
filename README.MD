# uAMQP

uAMQP is a general purpose C library for AMQP.

The goal is to be as compliant with the standard as possible while optimizing for low RAM footprint and also being portable.

It is currently a client side implementation only. Although much of the standard is symmetrical, there are parts that are asymmetrical, like the SASL handshake.
Currently uAMQP does not provide the server side for these asymmetrical protions of the ISO.

## Dependencies

uAMQP uses azure-c-shared-utility, which is a C library provising common functionality for basic tasks (like string, list manipulation, IO, etc.).
azure-c-shared-utility is available here: https://github.com/Azure/azure-c-shared-utility and it is used as a submodule.

This is a port of the original that can be found at https://www.github.com/Azure/azure-uamqp-c.git
