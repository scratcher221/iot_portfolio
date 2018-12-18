# Lecture Report 12

## Port forwarding via SSH

ssh -p 1234 user@host.net

- Tunnel via SSH:

ssh -p 5555 user@remote-host.net -L <local port>:<remote-host>:<remote-port>

## IoT Success Stories

### Nymea:

Nymea is an operating system for developing IoT functions for companies. They provide consistent updates for closing security holes and implementing new functions. They also provide their own App Store.

One concept they use is to have most processes running directly on the devices instead of in the cloud, which decreases failure rate.
