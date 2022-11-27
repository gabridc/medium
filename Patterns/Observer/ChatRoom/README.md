# ChatRoom Oberserver Pattern Example

### Description
---
Observer pattern is a software architecture in which an object, named the observable or subject, maintains a list of its dependents, called observers, and notifies them automatically of any state changes, usually by calling one of their methods. 

### Diagram
---

The following diagram shows how Observer and Observable classes are linked between them.

<img src="https://github.com/gabridc/medium/blob/main/Patterns/Resources/Observer_Diagram.PNG" alt="Observer pattern diagram" title="Observer pattern diagram"><br><br>

## About this example
---
<br>

### Description
---
The purpose of this example is create a program that could manage diferent chat rooms whit multiple users, when a new message is added in the chat room all the users (Observers) attached into the room must be notified and must download the last message added.

Chat Room class is the child of its parent class Observable. Observable class declares four functions: addObserver, newMessage, notify and getPendingMsg. 

* The function notify is implemented in Observable class because its implementation is common for all of its childs.

* The function addObserver adds a new user as participant in the chat rooms, the participant are notified when a message is added into the room.

* The function notify calls the function observe of every participant to inform that the chat has been updated with a new message.

* The function getPendingMsg are called from Observer class to get the pending messages that the user has not been downloaded. If the user has not send or received message call getPendingMsg() in the othe hand calls getPendingMsg(Message) sending the last message downloaded. 

    **Warning:** Multiple chat cannot be managed by the user, all the messaged are stored in the same list.

Observer class represent the participant or user in the chat rooms, it stores all the messages and is notified by the chat room when it is updated. Observer class declares two functions: observe(Observable*) and print

* The function observe(Observable*) receive as pointer parameter the chat updated, this parameter is user to call getPendingMessage and accessing through the pointer to the list of message stored in the chat room.

* The function print show all the messaged sent or received by the user. If the message is from himself prints the message in the rigth side.

### Flow
---

<img src="https://github.com/gabridc/medium/blob/main/Patterns/Resources/ChatRooms_Flow.PNG" alt="Observer pattern diagram" title="Observer pattern diagram"><br><br>