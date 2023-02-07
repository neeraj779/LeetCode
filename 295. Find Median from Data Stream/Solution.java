import java.util.PriorityQueue;

class MedianFinder {
    PriorityQueue<Integer> lowerHalf;
    PriorityQueue<Integer> upperHalf;
    
    /** initialize your data structure here. */
    public MedianFinder() {
        lowerHalf = new PriorityQueue<>((a, b) -> b - a);
        upperHalf = new PriorityQueue<>((a, b) -> a - b);
    }
    
    public void addNum(int num) {
        if (lowerHalf.isEmpty() || num <= lowerHalf.peek()) {
            lowerHalf.offer(num);
        } else {
            upperHalf.offer(num);
        }
        
        if (lowerHalf.size() > upperHalf.size() + 1) {
            upperHalf.offer(lowerHalf.poll());
        }
        
        if (upperHalf.size() > lowerHalf.size()) {
            lowerHalf.offer(upperHalf.poll());
        }
    }
    
    public double findMedian() {
        if (lowerHalf.size() == upperHalf.size()) {
            return (lowerHalf.peek() + upperHalf.peek()) / 2.0;
        } else {
            return lowerHalf.peek();
        }
    }
}
