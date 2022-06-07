# Workshop 4: A Packet Parser
## Due Date: Friday, June 17, 2022 before 23:59
## Workshop Objectives  
This lab will test your ability to use polymorphism with **virtual functions**.

## Submission Policy
The workshop should contain ***only work done by you this term*** or provided by your professor.  Work done in another term (by you or somebody else), or work done by somebody else and not **clearly identified/cited** is considered plagiarism, in violation of the Academic Integrity Policy.

Every file that you submit must contain (as a comment) at the top **your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

- Add comments throughout the code where necessary.

- If the file contains only your work, or work provided to you by your professor, add the following message as a comment at the top of the file:

    > I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

- If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which parts of the assignment are given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrong doing.

## Introduction and Workshop Tasks
This program parses a network packet. This packet could be of type UDP or type TCP. Generally speaking, UDP is for unreliable but fast communications, and TCP is for reliable but slower communications. Each packet has its own format. *This has been described in detail in* `PacketParserMain.cpp`. Both parsers will accept a packet of type `char*` and parse and store relevant information from that packet. Both parsers will also provide a report to an output stream. The function prototypes can be found in the base class `PacketParser.h`. You will create three classes as follows:
- `PacketParser`
- `TcpPacketParser`
- `UdpPacketParser`



### UDP Packet Parser
The UDP packet parser will extract the following information from the packet and store in class variables:
- `source_port`: This is contained within the first two bytes of the packet. The higher byte has to be multiplied by 0x100 then added to the lower byte.
- `dest_port`: This is contained within the next two bytes of the packet. The higher byte has to be multiplied by 0x100 then added to the lower byte.
- `length`: This is the length of the data portion of the packet. This is contained within the next two bytes of the packet. The higher byte has to be multiplied by 0x100 then added to the lower byte.
- `checksum`: This is the sum of the source port, the destination port, and the length. You have to calculate the checksum of the packet and compare to the checksum found in the packet. **If these numbers do not agree, then the data has been corrupted**. The checksum in the packet is contained within the next two bytes of the packet. The higher byte has to be multiplied by 0x100 then added to the lower byte.
- `data`: The data is found within the next "length" bytes of the packet. You have to perform a [memcpy](https://www.cplusplus.com/reference/cstring/memcpy/) from the data within the packet to the data variable of your class.

After the packet has been parsed, the UDP packet parser will report to an output stream the following in a separate function: the source port, the destination port, the data length, and the data itself.

**Be sure to zero all members of the UDP packet parser on destruction.**


### TCP Packet Parser
The TCP packet parser will extract the following information from the packet and store in class variables:

- `source_port`: This is contained within the first two bytes of the packet. The higher byte has to be multiplied by 0x100 then added to the lower byte.
- `dest_port`: This is contained within the next two bytes of the packet. The higher byte has to be multiplied by 0x100 then added to the lower byte.
- `sequence_number`: This is contained within the next four bytes of the packet. Add the bytes together as follows: the highest byte is multiplied by 0x1000000, the next highest by 0x10000, the next highest by 0x100, then add all these to the lowest byte.
- `ack_number`: This is contained within the next four bytes of the packet. Add the bytes together as follows: the highest byte is multiplied by 0x1000000, the next highest by 0x10000, the next highest by 0x100, then add all these to the lowest byte.
- `ignore`:  The next four bytes are ignored.
- `checksum`: This is the sum of the source port, the destination port, the sequence number, the acknowledge number, ignore and ignore2 and the length. You have to calculate the checksum of the packet and compare to the checksum found in the packet. **If these numbers do not agree, then the data has been corrupted**. The checksum in the packet is contained within the next two bytes of the packet. The higher byte has to be multiplied by 0x100 then added to the lower byte.
- `ignore2`: The next two bytes are ignored.
- `length`: This is the length of the data portion of the packet. This is contained within the next two bytes of the packet. The higher byte has to be multiplied by 0x100 then added to the lower byte.
- `data`: The data is found within the next "length" bytes of the packet. You have to perform a [memcpy](https://www.cplusplus.com/reference/cstring/memcpy/) from the data within the packet to the data variable of your class.

After the packet has been parsed, the TCP packet parser will report to an output stream the following in a separate function: the source port, the destination port, the sequence number, the acknowledgement number, the data length, and the data itself.

**Be sure to zero all members of the TCP packet parser on destruction.**



To assist you with this workshop, you might want to look at **Student** folder which contains the sample code that keeps track of marks for students in three different ways. The default way is by percentages. The other two ways is to have letter grades (A,B,C,D,F) or to have number grades (0-5): `Student.h`, `Student.cpp`, `LetterStudent.h`, `LetterStudent.cpp`, `NumberStudent.h`, `NumberStudent.cpp` and `StudentMain.cpp`.

**Be sure to add comments throughout the code where necessary.**

### Sample Output
You have been given the main test program: `PacketParserMain.cpp`. You have to create the header and CPP files for all the above classes.


A sample run is as follows:
```
    Report for UDP Packet Parser
    source port: 9
    dest port:   19
    data length: 36
    data:        The Toronto Maple Leafs lose again!!
    
    
    Report for TCP Packet Parser
    source port: 5
    dest port:   6
    seq number:  5
    ack number:  4
    data length: 41
    data:        The rain in Spain is mainly on the plane.	
```
## Reflection
Study your workshop solution, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.
Create a **text** file named `reflect.txt` that contains the answers to the following questions 

1. Why are you able to use a for-next loop in this example for two different types of parsers?
2. The tester for this program hardcodes a UDP packet parser and a TCP packet parser. Describe in general how would you use an interface (abstract class) that prompts the user for two types of packet parsers?




## Submission

Test and demonstrate the execution of your program using the data given to you and make sure your code is generating output similar to the above example.



- Please email the files: `PacketParser.cpp`, `PacketParser.h` , `TcpPacketParser.cpp`, `TcpPacketParser.h`, `UdpPacketParser.cpp`, `UdpPacketParser.h` in addition to the `reflect.txt` to email address: <mufleh.al-shatnawi@senecacollege.ca>

- Email Subject Line should be **`SEP200-NAA-WS04`**

####  Late submissions will incur a 25% penalty each day.

**:warning:Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Resubmissions will attract a penalty.

