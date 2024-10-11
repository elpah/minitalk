## **MINITALK**

**Overview**

**Minitalk** is a project about inter-process communication (IPC) using Unix signals. The goal is to create a simple communication program between a server and a client. The client sends a string to the server using signals, which are processed and printed by the server.

The project emphasizes:
- Signal handling (**`SIGUSR1`** and **`SIGUSR2`**).
- Converting data to binary form to transmit via signals.
- Robust handling of edge cases like message delays and long strings.

## **Features**

- **Server**: Waits for incoming messages from the client and displays them.
- **Client**: Sends a string as a series of binary signals to the server.
- Handles messages of varying lengths, including multi-line input.
- Error handling for invalid process IDs and transmission issues.

## **How It Works**

### **1. Server**

The server waits for incoming signals from the client. When the client sends a signal, it encodes the message bit by bit using **`SIGUSR1`** and **`SIGUSR2`**. The server reconstructs the message from these signals and prints it.

### **2. Client**

The client takes a string as an argument and sends it to the server's process using signals. The string is converted to binary, with each bit being sent as either a **`SIGUSR1`** or **`SIGUSR2`** signal.

## **Project Structure**

minitalk/  
│  
├── client.c        # Client-side implementation  
├── server.c        # Server-side implementation  
├── minitalk.h      # Header file  
├── Makefile        # Compilation instructions  
├── libft/          # Custom utility functions library  
└── printf/         # Custom printf implementation  



## **Requirements**

- Use only **`SIGUSR1`** and **`SIGUSR2`** for communication.
- The server must handle and display incoming messages correctly.
- Handle signal interruptions and long strings without issues.

## **Installation**

1. Clone the repository:
    ```bash
    git clone git@github.com:elpah/minitalk.git
    ```
2. Navigate to the project directory:
    ```bash
    cd minitalk
    ```
3. Build the project:
    ```bash
    make
    ```

## **Usage**

### **1. Start the Server**

Run the server program, which will output its **Process ID (PID)**:

```bash
./server
```

Take note of the PID, as you'll need it to send messages from the client.
2. Send a Message from the Client

Run the client, passing the server's PID and your message as arguments:
```bash
./client <server_pid> "Your message here"
```
Example
```bash
./client 12345 "Hello, Minitalk!"
```

Received message:
```bash
Message: Hello, Minitalk!
```

4. Stopping the Server

To stop the server, press Ctrl + C.

## **Makefile commands**

    make: Compiles the client and server programs as well as the libft and printf function.
    make clean: Removes object files.
    make fclean: Removes object files and executables.
    make re: Cleans and rebuilds everything.

