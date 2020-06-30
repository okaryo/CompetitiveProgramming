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

  def p_cnt
    cnt = 0
    @parent.each_with_index do |x, i|
      cnt += 1 if x == i
    end
    cnt - 1
  end
end

n,m = gets.split.map(&:to_i)
ab = m.times.map{gets.split.map(&:to_i)}

union_find = UnionFind.new(n)
ab.each do |a, b|
  union_find.unite(a-1, b-1)
end

puts union_find.p_cnt
