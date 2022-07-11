N,A,B = gets.split.map(&:to_i)
P,Q,R,S = gets.split.map(&:to_i)

is_drawn = lambda do |x, y|
  y == x - A + B || y == A + B - x
end

P.upto(Q) do |i|
  row = []
  R.upto(S) do |j|
    if is_drawn.call(i, j)
      row << '#'
    else
      row << '.'
    end
  end
  puts row.join('')
end
