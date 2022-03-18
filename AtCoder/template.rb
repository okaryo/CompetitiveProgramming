gets.chomp
gets.to_i
gets.split.map(&:to_i)
N.times.map{gets.split.map(&:to_i)}.transpose

class UnionFind
  def initialize(size)
    @rank = Array.new(size, 0)
    @parent = Array.new(size, &:itself)
  end

  def unite(x_node, y_node)
    x_parent = find_parent(x_node)
    y_parent = find_parent(y_node)
    return if x_parent == y_parent

    if @rank[x_parent] > @rank[y_parent]
      @parent[y_parent] = x_parent
    else
      @parent[x_parent] = y_parent
      @rank[y_parent] += 1 if @rank[x_parent] == @rank[y_parent]
    end
  end

  def find_parent(node)
    @parent[node] == node ? node : @parent[node] = find_parent(@parent[node])
  end

  def same_parent?(x_node, y_node)
    find_parent(x_node) == find_parent(y_node)
  end
end

class PriorityQueue
  # min heap
  # valueが配列の場合はvalue[0]の値を比較する
  def initialize(source = []);@heap = [];source.each { |e| push(e) };end
  def size;@heap.size;end
  def empty?;@heap.empty?;end
  def top;@heap.first;end
  def push(value);@heap << value;new_node_index = @heap.size - 1;if array_value?;while new_node_index > 0;parent_node_index = (new_node_index - 1) / 2;break if @heap[parent_node_index].first <= value.first;@heap[parent_node_index], @heap[new_node_index] = @heap[new_node_index], @heap[parent_node_index];new_node_index = parent_node_index;end;else;while new_node_index > 0;parent_node_index = (new_node_index - 1) / 2;break if @heap[parent_node_index] <= value;@heap[parent_node_index], @heap[new_node_index] = @heap[new_node_index], @heap[parent_node_index];new_node_index = parent_node_index;end;end;@heap[new_node_index] = value;end
  def pop;min = top;tmp_node = @heap.pop;tmp_index = 0;if array_value?;while (tmp_index * 2 + 1) < size do;tmp_left_child_index  = tmp_index * 2 + 1;tmp_right_child_index = tmp_index * 2 + 2;min_child_index = tmp_left_child_index;if tmp_right_child_index < size && @heap[tmp_left_child_index].first > @heap[tmp_right_child_index].first;min_child_index = tmp_right_child_index;end;break if @heap[min_child_index].first >= tmp_node.first;@heap[tmp_index] = @heap[min_child_index];tmp_index = min_child_index;end;else;while (tmp_index * 2 + 1) < size do;tmp_left_child_index  = tmp_index * 2 + 1;tmp_right_child_index = tmp_index * 2 + 2;min_child_index = tmp_left_child_index;if tmp_right_child_index < size && @heap[tmp_left_child_index] > @heap[tmp_right_child_index];min_child_index = tmp_right_child_index;end;break if @heap[min_child_index] >= tmp_node;@heap[tmp_index] = @heap[min_child_index];tmp_index = min_child_index;end;end;@heap[tmp_index] = tmp_node unless empty?;min; end
  private
  def array_value?;return false if empty?;@heap.first.instance_of?(Array);end
end

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
