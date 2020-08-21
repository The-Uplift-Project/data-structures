'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

const SinglyLinkedListNode = class {
    constructor(nodeData) {
        this.data = nodeData;
        this.next = null;
    }
};

const SinglyLinkedList = class {
    constructor() {
        this.head = null;
        this.tail = null;
    }

    insertNode(nodeData) {
        const node = new SinglyLinkedListNode(nodeData);

        if (this.head == null) {
            this.head = node;
        } else {
            this.tail.next = node;
        }

        this.tail = node;
    }
};

function printSinglyLinkedList(node, sep, ws) {
    while (node != null) {
        ws.write(String(node.data));

        node = node.next;

        if (node != null) {
            ws.write(sep);
        }
    }
}

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode next;
 * }
 *
 */
function insertNodeAtPosition(head, data, position) {
    let newNode= new SinglyLinkedListNode();
    newNode.data=data;
    if(head==null){
        // temp.next=null;
        
        return temp;
    }
    if(position==0){
        temp.next=head;
        return temp;
    }
    let tempPrev=null; // node before position
    let tempCurrentHead=head; // node at the given position
    var i=0;
    while(i!=position && tempCurrentHead!=null){
        i++;
        tempPrev=tempCurrentHead;
        tempCurrentHead=tempCurrentHead.next;
    }
    newNode.next=tempCurrentHead;
    tempPrev.next=newNode;
    
 
    return head;
}

function main() {