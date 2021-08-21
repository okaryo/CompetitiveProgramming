class PriorityQueue
  # min heap
  # valueが配列の場合は先頭の値を比較する
  def initialize(source = []);@heap = [];source.each { |e| push(e) };end
  def size;@heap.size;end
  def empty?;@heap.empty?;end
  def top;@heap.first;end
  def push(value);@heap << value;new_node_index = @heap.size - 1;if array_value?;while new_node_index > 0;parent_node_index = (new_node_index - 1) / 2;break if @heap[parent_node_index].first <= value.first;@heap[parent_node_index], @heap[new_node_index] = @heap[new_node_index], @heap[parent_node_index];new_node_index = parent_node_index;end;else;while new_node_index > 0;parent_node_index = (new_node_index - 1) / 2;break if @heap[parent_node_index] <= value;@heap[parent_node_index], @heap[new_node_index] = @heap[new_node_index], @heap[parent_node_index];new_node_index = parent_node_index;end;end;@heap[new_node_index] = value;end
  def pop;min = top;tmp_node = @heap.pop;tmp_index = 0;if array_value?;while (tmp_index * 2 + 1) < size do;tmp_left_child_index  = tmp_index * 2 + 1;tmp_right_child_index = tmp_index * 2 + 2;min_child_index = tmp_left_child_index;if tmp_right_child_index < size && @heap[tmp_left_child_index].first > @heap[tmp_right_child_index].first;min_child_index = tmp_right_child_index;end;break if @heap[min_child_index].first >= tmp_node.first;@heap[tmp_index] = @heap[min_child_index];tmp_index = min_child_index;end;else;while (tmp_index * 2 + 1) < size do;tmp_left_child_index  = tmp_index * 2 + 1;tmp_right_child_index = tmp_index * 2 + 2;min_child_index = tmp_left_child_index;if tmp_right_child_index < size && @heap[tmp_left_child_index] > @heap[tmp_right_child_index];min_child_index = tmp_right_child_index;end;break if @heap[min_child_index] >= tmp_node;@heap[tmp_index] = @heap[min_child_index];tmp_index = min_child_index;end;end;@heap[tmp_index] = tmp_node unless empty?;min; end
  private
  def array_value?;return false if empty?;@heap.first.instance_of?(Array);end
end

h,w = gets.split.map(&:to_i)
grid = h.times.map{gets.split.map(&:to_i)}
INF = 10**100
dijkstra = lambda do |si, sj|
  dist = Array.new(h) {Array.new(w, INF)}
  pq = PriorityQueue.new()
  dist[si][sj] = 0
  pq.push([0, si, sj])
  di = [0, 0, 1, -1]
  dj = [1, -1, 0, 0]
  while !pq.empty? do
    d,i,j = pq.pop
    next if d > dist[i][j]
    4.times do |k|
      i2 = i + di[k]
      j2 = j + dj[k]
      next unless i2 >= 0 && j2 >= 0 && i2 < h && j2 < w && d + grid[i2][j2] < dist[i2][j2]
      dist[i2][j2] = d + grid[i2][j2]
      pq.push([dist[i2][j2], i2, j2])
    end
  end
  return dist
end
dist1 = dijkstra.call(h-1, 0)
dist2 = dijkstra.call(h-1, w-1)
dist3 = dijkstra.call(0, w-1)
ans = 10**100
h.times do |i|
  w.times do |j|
    res = dist1[i][j] + dist2[i][j] + dist3[i][j] - 2*grid[i][j]
    ans = [ans, res].min
  end
end
puts(ans)
