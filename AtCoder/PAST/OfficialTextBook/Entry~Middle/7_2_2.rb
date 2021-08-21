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

n,m = gets.split.map(&:to_i)
xyc_large = n.times.map{gets.split.map(&:to_i)}
xyc_small = m.times.map{gets.split.map(&:to_i)}
edge_cost = lambda do |xyc1, xyc2|
  x1, y1, c1 = xyc1
  x2, y2, c2 = xyc2
  cost = ((x1-x2)**2 + (y1-y2)**2)**0.5
  if c1 != c2
    cost *= 10
  end
  return cost
end

ans = 10.0**100
(1<<m).times do |b|
  xyc_use = xyc_large.dup
  m.times do |bit|
    if b[bit] != 0
      xyc_use << xyc_small[bit]
    end
  end
  length = xyc_use.size

  pq = PriorityQueue.new()
  used = Array.new(length, false)
  pq.push([0.0, 0])
  res = 0.0
  while !pq.empty? do
    cost, i = pq.pop
    if !used[i]
      res += cost
      used[i] = true
      length.times do |j|
        if !used[j]
          cost = edge_cost.call(xyc_use[i], xyc_use[j])
          pq.push([cost, j])
        end
      end
    end
  end
  ans = [ans, res].min
end
puts(ans)
