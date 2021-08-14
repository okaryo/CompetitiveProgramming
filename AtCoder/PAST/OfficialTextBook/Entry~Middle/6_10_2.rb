class PriorityQueue
  # min heap
  def initialize(source = [])
    @heap = []
    source.each { |e| push(e) }
  end

  def size
    @heap.size
  end

  def empty?
    @heap.empty?
  end

  def top
    @heap.first
  end

  def push(value)
    @heap << value
    new_node_index = @heap.size - 1

    while new_node_index > 0
      parent_node_index = (new_node_index - 1) / 2

      if array_value?
        break if @heap[parent_node_index].first <= value.first
      else
        break if @heap[parent_node_index] <= value
      end

      @heap[parent_node_index], @heap[new_node_index] = @heap[new_node_index], @heap[parent_node_index]
      new_node_index = parent_node_index
    end

    @heap[new_node_index] = value
  end

  def pop
    min = top

    tmp_node = @heap.pop

    tmp_index = 0
    while (tmp_index * 2 + 1) < size do
      tmp_left_child_index  = tmp_index * 2 + 1
      tmp_right_child_index = tmp_index * 2 + 2
      min_child_index = tmp_left_child_index

      if array_value?
        if tmp_right_child_index < size && @heap[tmp_left_child_index].first > @heap[tmp_right_child_index].first
          min_child_index = tmp_right_child_index
        end
        break if @heap[min_child_index].first >= tmp_node.first
      else
        if tmp_right_child_index < size && @heap[tmp_left_child_index] > @heap[tmp_right_child_index]
          min_child_index = tmp_right_child_index
        end
        break if @heap[min_child_index] >= tmp_node
      end

      @heap[tmp_index] = @heap[min_child_index]
      tmp_index = min_child_index
    end

    @heap[tmp_index] = tmp_node unless empty?

    min
  end

  private

  def array_value?
    return false if empty?
    @heap.first.instance_of?(Array)
  end
end

n,m = gets.split.map(&:to_i)
graph = Array.new(n) {[]}
m.times do
  u,v,c = gets.split.map(&:to_i)
  graph[u] << [v, c]
end
dist = Array.new(n, -1)
pq = PriorityQueue.new()
pq.push([0, 0])
dist[0] = 0
done = Array.new(n, false)
while pq.size > 0 do
  d, i = pq.pop
  next if done[i]
  done[i] = true
  graph[i].each do |j, c|
    if dist[j] == -1 || dist[j] > dist[i] + c
      dist[j] = dist[i] + c
      pq.push([dist[j], j])
    end
  end
end
puts(dist[n-1])
