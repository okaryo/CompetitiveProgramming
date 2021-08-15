class PriorityQueue
  # min heap
  def initialize(source = []);@heap = [];source.each { |e| push(e) };end
  def size;@heap.size;end
  def empty?;@heap.empty?;end
  def top;@heap.first;end
  def push(value);@heap << value;new_node_index = @heap.size - 1;if array_value?;while new_node_index > 0;parent_node_index = (new_node_index - 1) / 2;break if @heap[parent_node_index].first <= value.first;@heap[parent_node_index], @heap[new_node_index] = @heap[new_node_index], @heap[parent_node_index];new_node_index = parent_node_index;end;else;while new_node_index > 0;parent_node_index = (new_node_index - 1) / 2;break if @heap[parent_node_index] <= value;@heap[parent_node_index], @heap[new_node_index] = @heap[new_node_index], @heap[parent_node_index];new_node_index = parent_node_index;end;end;@heap[new_node_index] = value;end
  def pop;min = top;tmp_node = @heap.pop;tmp_index = 0;if array_value?;while (tmp_index * 2 + 1) < size do;tmp_left_child_index  = tmp_index * 2 + 1;tmp_right_child_index = tmp_index * 2 + 2;min_child_index = tmp_left_child_index;if tmp_right_child_index < size && @heap[tmp_left_child_index].first > @heap[tmp_right_child_index].first;min_child_index = tmp_right_child_index;end;break if @heap[min_child_index].first >= tmp_node.first;@heap[tmp_index] = @heap[min_child_index];tmp_index = min_child_index;end;else;while (tmp_index * 2 + 1) < size do;tmp_left_child_index  = tmp_index * 2 + 1;tmp_right_child_index = tmp_index * 2 + 2;min_child_index = tmp_left_child_index;if tmp_right_child_index < size && @heap[tmp_left_child_index] > @heap[tmp_right_child_index];min_child_index = tmp_right_child_index;end;break if @heap[min_child_index] >= tmp_node;@heap[tmp_index] = @heap[min_child_index];tmp_index = min_child_index;end;end;@heap[tmp_index] = tmp_node unless empty?;min; end
  private
  def array_value?;return false if empty?;@heap.first.instance_of?(Array);end
end

n,m = gets.split.map(&:to_i)
graph = Array.new(n) {[]}
m.times do
  u,v,c = gets.split.map(&:to_i)
  graph[u-1] << [v-1, c]
  graph[v-1] << [u-1, c]
end
marked = Array.new(n, false)
marked_count = 0
ans = 0
pq = PriorityQueue.new()
graph[0].each do |v,c|
  pq.push([c, v])
end
marked[0] = true
marked_count += 1
while marked_count < n do
  cost, v = pq.pop
  next if marked[v]
  marked[v] = true
  marked_count += 1
  ans += cost
  graph[v].each do |node, c|
    next if marked[node]
    pq.push([c, node])
  end
end
puts(ans)
