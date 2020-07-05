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

    while new_node_index > 0 do
      parent_node_index = (new_node_index - 1) / 2

      break if @heap[parent_node_index] <= value

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

      if tmp_right_child_index < size && @heap[tmp_left_child_index] > @heap[tmp_right_child_index]
        min_child_index = tmp_right_child_index
      end

      break if @heap[min_child_index] >= tmp_node

      @heap[tmp_index] = @heap[min_child_index]
      tmp_index = min_child_index
    end

    @heap[tmp_index] = tmp_node unless empty?

    min
  end
end

N,K = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)

MOD = 10**9 + 7

plus_pq = PriorityQueue.new
minus_pq = PriorityQueue.new

A.each do |a_v|
  if a_v >= 0
    plus_pq.push(-1 * a_v)
  end
  if a_v < 0
    minus_pq.push(a_v)
  end
end

cnt = K
ans = 1
t = [K - plus_pq.size, 0].max
if t.odd?
  plus_pq = nil
  minus_pq = nil
  pq = PriorityQueue.new
  A.each do |a_v|
    if a_v >= 0
      pq.push(a_v)
    end
    if a_v < 0
      pq.push(a_v * -1)
    end
  end
  K.times do
    ans *= pq.pop
    ans %= MOD
  end
  ans *= -1
  puts ans % MOD
  exit
end
while cnt > 0
  if cnt >= 2 && minus_pq.size >= 2 && plus_pq.size >= 2
    minus_1 = minus_pq.pop
    minus_2 = minus_pq.pop

    plus_1 = plus_pq.pop
    plus_2 = plus_pq.pop

    if minus_1 * minus_2 >= plus_1 * plus_2
      ans *= minus_1 * -1
      ans %= MOD
      ans *= minus_2 * -1
      ans %= MOD

      plus_pq.push(plus_1)
      plus_pq.push(plus_2)
    else
      ans *= plus_1 * -1
      ans %= MOD
      ans *= plus_2 * -1
      ans %= MOD

      plus_pq.push(minus_1)
      plus_pq.push(minus_2)
    end
    cnt -= 2
  elsif cnt >= 2 && minus_pq.size >= 2 && plus_pq.size >= 1
    minus_1 = minus_pq.pop
    minus_2 = minus_pq.pop

    plus_1 = plus_pq.pop

    if minus_1 * minus_2 >= plus_1
      ans *= minus_1 * -1
      ans %= MOD
      ans *= minus_2 * -1
      ans %= MOD

      plus_pq.push(plus_1)
      cnt -= 2
    else
      ans *= plus_1 * -1
      ans %= MOD

      plus_pq.push(minus_1)
      plus_pq.push(minus_2)
      cnt -= 1
    end
  elsif minus_pq.size == 0
    plus_1 = plus_pq.pop
    ans *= plus_1 * -1
    ans %= MOD if ans > 0
    cnt -= 1
  elsif plus_pq.size == 0
    minus_1 = minus_pq.pop
    ans *= minus_1
    ans %= MOD if ans > 0
    cnt -= 1
  else
    plus_1 = plus_pq.pop
    ans *= plus_1 * -1
    ans %= MOD if ans > 0
    cnt -= 1
  end
end

puts ans % MOD
