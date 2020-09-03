
/*
* Java Program to traverse a binary tree 
* using postOrder traversal without recursion. 

*/

import java.util.Stack;

public class PostOrder {

    public static void main(String[] args) throws Exception {

        // construct the binary tree given in question
        BinaryTree bt = BinaryTree.create();

        // traversing binary tree using post order traversal using recursion
        System.out.println("printing nodes of binary tree on post order using recursion");

        bt.postOrder();

        System.out.println(); // insert new line

        // traversing binary tree on post order traversal without recursion
        System.out.println("printing nodes of binary tree on post order using iteration");
        bt.postOrderWithoutRecursion();
    }

}

class BinaryTree {
    static class TreeNode {
        String data;
        TreeNode left, right;

        TreeNode(String value) {
            this.data = value;
            left = right = null;
        }

        boolean isLeaf() {
            return left == null ? right == null : false;
        }

    }

    // root of binary tree
    TreeNode root;

    /**
     * traverse the binary tree on post order traversal algorithm
     */
    public void postOrder() {
        postOrder(root);
    }

    private void postOrder(TreeNode node) {
        if (node == null) {
            return;
        }

        postOrder(node.left);
        postOrder(node.right);
        System.out.printf("%s ", node.data);
    }

    public void postOrderWithoutRecursion() {
        Stack nodes = new Stack<>();
        nodes.push(root);

        while (!nodes.isEmpty()) {
            TreeNode current = (TreeNode) nodes.peek();

            if (current.isLeaf()) {
                TreeNode node = (TreeNode) nodes.pop();
                System.out.printf("%s ", node.data);
            } else {

                if (current.right != null) {
                    nodes.push(current.right);
                    current.right = null;
                }

                if (current.left != null) {
                    nodes.push(current.left);
                    current.left = null;
                }
            }

        }
    }

    /**
     * Java method to create binary tree with test data
     * 
     * @return a sample binary tree for testing
     */
    public static BinaryTree create() {
        BinaryTree tree = new BinaryTree();
        TreeNode root = new TreeNode("45");
        tree.root = root;
        tree.root.left = new TreeNode("25");
        tree.root.left.left = new TreeNode("15");
        tree.root.left.left.left = new TreeNode("5");

        tree.root.left.right = new TreeNode("35");
        tree.root.right = new TreeNode("55");
        tree.root.right.right = new TreeNode("65");
        tree.root.right.right.left = new TreeNode("77");
        tree.root.right.right.right = new TreeNode("88");

        return tree;
    }

}
