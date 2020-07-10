class OkaryoStack
  attr_accessor :stack, :size
  attr_reader :stack_length

  def initialize(length)
    @stack = []
    @size = 0
    @stack_length = length
  end

  def push(n, m)
    stack << [m, n]
    self.size += n
  end

  def pop(n)
    t_sum = 0
    while true
      t_sum += stack[-1][1]
      if t_sum <= n
        self.size -= stack[-1][1]
        stack.pop
        if t_sum == n
          break
        end
      else
        d = t_sum - n
        self.size -= (stack[-1][1] - d)
        self.stack[-1][1] -= (stack[-1][1] - d)
        break
      end
    end
  end

  def top
    stack[-1][0]
  end

  def over_push?
    stack_length < self.size
  end

  def over_pop?(pop_size)
    size < pop_size
  end

  def empty?
    self.size == 0
  end
end

q,l = gets.split.map(&:to_i)
st = OkaryoStack.new(l)

q.times do |i|
  query = gets.chomp
  if query[0] == 'T'
    unless st.empty?
      puts st.top
    else
      puts 'EMPTY'
      exit
    end
  elsif query[0] == 'S'
    puts st.size
  elsif query[1] == 'u'
    _,n,m = query.split
    st.push(n.to_i, m.to_i)
    if st.over_push?
      puts 'FULL'
      exit
    end
  else
    _,n = query.split
    if st.over_pop?(n.to_i)
      puts 'EMPTY'
      exit
    end
    st.pop(n.to_i)
  end
end

puts 'SAFE'
